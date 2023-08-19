import React from 'react';
import Link from "next/link";

const page = () => {
    return (
        <div className='flex-center text-xl'>
            <div className='text-center underline'><Link href={"/S3/DS-Lab"}>Semester 3 - Data Structure Lab</Link></div>
            <div className='text-center underline'>Exp6b - Selection Sort</div>
            
        </div>
    )
}

export default page;