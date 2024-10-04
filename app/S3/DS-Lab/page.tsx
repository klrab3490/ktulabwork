import React from 'react';
import Link from "next/link";

export default function page() {
    return (
        <div className='flex-center text-xl'>
            <div className='text-center underline'>
                <Link href={"/S3/DS-Lab"}>Semester 3</Link>
            </div>
            <div className='text-center underline'>Data Structure Lab</div>
            <ul>
                <li><Link href={"/S3/DS-Lab/Exp1a"}> Experiment 1a. Stack </Link> </li>
                <li><Link href={"/S3/DS-Lab/Exp1b"}> Experiment 1b. Queue </Link> </li>
                <li><Link href={"/S3/DS-Lab/Exp1c"}> Experiment 1c. Circular Queue </Link> </li>
                <li><Link href={"/S3/DS-Lab/Exp1d"}> Experiment 1d. De-Queue </Link> </li>
                <li><Link href={"/S3/DS-Lab/Exp2a"}> Experiment 2a. Infix To Postfix </Link> </li>
                <li><Link href={"/S3/DS-Lab/Exp2b"}> Experiment 2b. Postfix Evaluation </Link> </li>
                <li><Link href={"/S3/DS-Lab/Exp3a"}> Experiment 3a. Linear Search </Link> </li>
                <li><Link href={"/S3/DS-Lab/Exp3b"}> Experiment 3b. Binary Search </Link> </li>
                <li><Link href={"/S3/DS-Lab/Exp4"}> Experiment 4. Singly Linked List </Link> </li>
                <li><Link href={"/S3/DS-Lab/Exp5a"}> Experiment 5a. Polynomial Addition </Link> </li>
                <li><Link href={"/S3/DS-Lab/Exp5b"}> Experiment 5b. Sparse Matrix </Link> </li>
                <li><Link href={"/S3/DS-Lab/Exp6a"}> Experiment 6a. Bubble Sort </Link> </li>
                <li><Link href={"/S3/DS-Lab/Exp6b"}> Experiment 6b. Selection Sort </Link> </li>
                <li><Link href={"/S3/DS-Lab/Exp6c"}> Experiment 6c. Insertion Sort </Link> </li>
                <li><Link href={"/S3/DS-Lab/Exp6d"}> Experiment 6d. Heap Sort </Link> </li>
                <li><Link href={"/S3/DS-Lab/Exp7a"}> Experiment 7a. DFS </Link> </li>
                <li><Link href={"/S3/DS-Lab/Exp7b"}> Experiment 7b. BFS </Link> </li>
                <li><Link href={"/S3/DS-Lab/Exp8"}> Experiment 8. Polynomial Addition & Multiplication </Link> </li>
                <li><Link href={"/S3/DS-Lab/Exp9"}> Experiment 9. Binary Tree </Link> </li>
                <li><Link href={"/S3/DS-Lab/Exp10"}> Experiment 10. Hashing </Link> </li>
                <li><Link href={"/S3/DS-Lab/Exp11a"}> Experiment 11a. Merge Sort </Link> </li>
                <li><Link href={"/S3/DS-Lab/Exp11b"}> Experiment 11b. Quick Sort </Link> </li>
            </ul>
        </div>
    )
}