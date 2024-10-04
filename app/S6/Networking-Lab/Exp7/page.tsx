import React from 'react';
import Link from "next/link";

export default function page() {
    return (
        <div className='flex-center text-xl'>
            <div className='text-center underline'>
                <Link href={"/S6/Networking-Lab"}>Semester 6 - Networking Lab</Link>
            </div>
            <div className='grid grid-cols-3 py-4'>
                <Link href={"/S6/Networking-Lab/Exp6"}>Previous</Link>
                <div className='text-center underline'>Exp7 - File Transfer Protocols</div>
                <Link href={"/S6/Networking-Lab/Exp8"} className='text-end'>Next</Link>
            </div>
            <div> Text + Image </div>
            <div>
                code
            </div>

        </div>
    )
}