import React from 'react';
import Link from "next/link";

const page = () => {
    return (
        <div className='flex-center text-xl'>
            <div className='text-center underline'><Link href={"/S3/DS-Lab"}>Semester 3 - Data Structure Lab</Link></div>
            <div className='flex items-center justify-between'>
                <Link href={"/S3/DS-Lab"}>Previous/Home</Link>
                <div className='text-center underline'>Exp1a - Stack</div>
                <Link href={"/S3/DS-Lab/Exp1b"}>Next</Link>
            </div>
            <div> Text + inage  </div>
            <div>
                code
            </div>

        </div>
    )
}

export default page;