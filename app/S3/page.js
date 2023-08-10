import React from 'react';
import Link from "next/link";

const page = () => {
    return (
        <div className='flex-center text-xl'>
            <div className='text-center underline'>Semester 3</div>
            <ul>
                <li><Link href={"/S3/DS-Lab"}> 1.DS </Link> </li>
                <li><Link href={"/S3/Java-Lab"}> 2.OOP </Link> </li>
            </ul>
        </div>
    )
}

export default page;