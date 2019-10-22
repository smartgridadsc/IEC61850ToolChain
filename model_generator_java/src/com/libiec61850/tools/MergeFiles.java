package com.libiec61850.tools;

import java.io.*;
import java.util.Scanner;

public class MergeFiles {
    public static void main(String args[])
    {
        String currentDirectory = System.getProperty("user.dir");
        System.out.println("The current working directory is " + currentDirectory);

        String srcy, srcz, merge;
//        Scanner scan = new Scanner(System.in);

        /* enter the file names with extension like file.txt */

//        System.out.print("Enter First File Name : ");
//        srcy = scan.nextLine();
//        System.out.print("Enter Second File Name : ");
//        srcz = scan.nextLine();
//
//        System.out.print("Enter FileName to Store merged content of First and Second File : ");
//        merge = scan.nextLine();

        File[] files = new File[3];
        files[0] = new File(".\\src\\com\\libiec61850\\tools\\template1.txt");
        files[1] = new File(".\\src\\com\\libiec61850\\tools\\hardcode.txt");
        files[2] = new File(".\\src\\com\\libiec61850\\tools\\template2.txt");


        File mergedFile = new File(".\\src\\com\\libiec61850\\tools\\target.txt");

        MergeFiles(files, mergedFile);

    }

    public static void MergeFiles(File[] files, File mergedFile)
    {
        FileWriter fstream = null;
        BufferedWriter out = null;

        try
        {
            fstream = new FileWriter(mergedFile, true);
            out = new BufferedWriter(fstream);
        }
        catch(IOException e1)
        {
            e1.printStackTrace();
        }

        System.out.print("Merging Both File...\n");

        for(File f : files)
        {
            FileInputStream fis;
            try
            {
                fis = new FileInputStream(f);
                BufferedReader in = new BufferedReader(new InputStreamReader(fis));

                String aLine;
                while((aLine = in.readLine()) != null)
                {
                    out.write(aLine);
                    out.newLine();
                }

                in.close();
            }
            catch(IOException e)
            {
                e.printStackTrace();
            }
        }
        System.out.print("\nMerged Successfully..!!");

        try
        {
            out.close();
        }
        catch(IOException e)
        {
            e.printStackTrace();
        }
    }
}
