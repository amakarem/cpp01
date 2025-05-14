/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 21:07:59 by aelaaser          #+#    #+#             */
/*   Updated: 2025/05/14 15:22:31 by aelaaser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

static int open_files(std::string input_filename, std::string output_filename, std::ifstream *inputfile, std::ofstream *outputfile)
{
	(*inputfile).open(input_filename, std::fstream::in);
	if (!(*inputfile))
	{
		std::cerr << "Failed to open " << input_filename << std::endl;
		(*inputfile).close();
		return (1);
	}
	(*outputfile).open(output_filename, std::fstream::out);
	if (!(*outputfile))
	{
		std::cerr << "Failed to open output file " << output_filename << std::endl;
		(*inputfile).close();
		(*outputfile).close();
		return (1);
	}
	return (0);
}

void search_replace(std::string find, std::string replace, std::ifstream *inputfile, std::ofstream *outputfile)
{
	std::string line;
	std::string final_line;
	std::string::size_type	found;
	int last_find_pos;

	while (std::getline(*inputfile, line))
	{
		final_line.clear();
		last_find_pos = 0;
		found = line.find(find);
		if (found == std::string::npos)
			final_line = line;
		while (found != std::string::npos)
		{
			final_line.append(line, last_find_pos, (found - last_find_pos));
			final_line += replace;
			last_find_pos = found + find.length();
			found = line.find(find, last_find_pos);
			if (found == std::string::npos)
				final_line.append(line, last_find_pos, line.length());
		}
		if ((*inputfile).eof())
			(*outputfile) << final_line;
		else
			(*outputfile) << final_line << std::endl;
	}
}

int main(int argc, char **argv)
{
	std::string input_filename;
	std::string output_filename;
	std::ifstream inputfile;
	std::ofstream outputfile;


	if (argc != 4)
		return (std::cout << "Wrong number of arguments" << std::endl, 0);
	input_filename = argv[1];
	output_filename = input_filename + ".replace";
	if (open_files(input_filename, output_filename, &inputfile, &outputfile))
		return (1);
	search_replace(argv[2], argv[3], &inputfile, &outputfile);
	inputfile.close();
	outputfile.close();
	return (0);
}
