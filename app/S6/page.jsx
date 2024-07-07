import React from 'react';
import Link from "next/link";

export default function page() {
    return (
        <div className='flex-center text-xl'>
            <div className='text-center underline'>Semester 6 - Networking Lab</div>
            <ul>
                <li><Link href={"/S6/Networking-Lab"}> 1.DBMS </Link> </li>
            </ul>
        </div>
    )
}
