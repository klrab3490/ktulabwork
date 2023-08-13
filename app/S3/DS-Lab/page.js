import React from 'react';
import Link from "next/link";

const page = () => {
    return (
        <div className='flex-center text-xl'>
            <div className='text-center underline'>Semester 3 - Data Structure Lab</div>
            <ul>
                <li><Link href={"/S3/Exp1a"}> Experiment 1a. </Link> </li>
                <li><Link href={"/S3/Exp1b"}> Experiment 1b. </Link> </li>
                <li><Link href={"/S3/Exp1c"}> Experiment 1c. </Link> </li>
                <li><Link href={"/S3/Exp1d"}> Experiment 1d. </Link> </li>
                <li><Link href={"/S3/Exp2a"}> Experiment 2a. </Link> </li>
                <li><Link href={"/S3/Exp2b"}> Experiment 2b. </Link> </li>
                <li><Link href={"/S3/Exp3a"}> Experiment 3a. </Link> </li>
                <li><Link href={"/S3/Exp3b"}> Experiment 3b. </Link> </li>
                <li><Link href={"/S3/Exp4"}> Experiment 4. </Link> </li>
                <li><Link href={"/S3/Exp5a"}> Experiment51a. </Link> </li>
                <li><Link href={"/S3/Exp5b"}> Experiment5ba. </Link> </li>
                <li><Link href={"/S3/Exp6a"}> Experiment61a. </Link> </li>
                <li><Link href={"/S3/Exp6b"}> Experiment6ba. </Link> </li>
                <li><Link href={"/S3/Exp6c "}> Experiment6c. </Link> </li>
                <li><Link href={"/S3/Exp6d"}> Experiment 6d. </Link> </li>
                <li><Link href={"/S3/Exp7a"}> Experiment 7a. </Link> </li>
                <li><Link href={"/S3/Exp7b"}> Experiment 7b. </Link> </li>
                <li><Link href={"/S3/Exp8"}> Experiment 8. </Link> </li>
                <li><Link href={"/S3/Exp9"}> Experiment 9. </Link> </li>
                <li><Link href={"/S3/Exp10"}> Experiment 10. </Link> </li>
                <li><Link href={"/S3/Exp11a"}> Experiment 11a. </Link> </li>
                <li><Link href={"/S3/Exp11b"}> Experiment 11b. </Link> </li>
            </ul>
        </div>
    )
}

export default page;