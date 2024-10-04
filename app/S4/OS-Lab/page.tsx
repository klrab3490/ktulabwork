import React from 'react';
import Link from "next/link";

export default function page() {
    return (
        <div className='flex-center text-xl'>
            <div className='text-center underline'>Semester 4 - Operating System Lab</div>
            <ul>
                <li><Link href={"/S4/Digital-Lab"}> 1.Digital </Link> </li>
                <li><Link href={"/S4/OS-Lab"}> 2.OS </Link> </li>
            </ul>
        </div>
    )
}
