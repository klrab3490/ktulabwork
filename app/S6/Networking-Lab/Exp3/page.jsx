import React from 'react';
import Link from "next/link";

export default function page() {
    return (
        <div className='flex-center text-xl'>
            <div className='text-center underline'><Link href={"/S6/Networking-Lab"}>Semester 6 - Networking Lab</Link></div>
            <div className='flex items-center justify-between'>
                <Link href={"/S6/Networking-Lab"}>Previous/Home</Link>
                <div className='text-center underline'>Exp3 - TCP Chat Server</div>
                <Link href={"/S6/Networking-Lab/Exp4"}>Next</Link>
            </div>
            <div> Text + Image </div>
            <div>
                code
            </div>

        </div>
    )
}
