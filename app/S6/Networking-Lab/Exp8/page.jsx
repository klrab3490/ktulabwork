import React from 'react';
import Link from "next/link";

export default function page() {
    return (
        <div className='flex-center text-xl'>
            <div className='text-center underline'><Link href={"/S6/Networking-Lab"}>Semester 6 - Networking Lab</Link></div>
            <div className='flex items-center justify-between'>
                <Link href={"/S6/Networking-Lab/Exp7"}>Previous</Link>
                <div className='text-center underline'>Exp8 - Leaky Bucket Algorithm</div>
                <Link href={"/S6/Networking-Lab/Exp9"}>Next</Link>
            </div>
            <div> Text + Image </div>
            <div>
                code
            </div>

        </div>
    )
}
