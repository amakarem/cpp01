/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 21:07:59 by aelaaser          #+#    #+#             */
/*   Updated: 2025/05/13 21:26:52 by aelaaser         ###   ########.fr       */
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
	inputfile.close();
	outputfile.close();
	return (0);
}
