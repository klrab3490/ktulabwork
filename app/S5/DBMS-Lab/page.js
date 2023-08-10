import React from 'react';
import Link from "next/link";

const page = () => {
    return (
        <div className='flex-center text-xl'>
            <div className='text-center underline'>Semester 5 - Database Management System Lab</div>
            <ul>
                <li><Link href={"/S5/DBMS-Lab"}> 1.DBMS </Link> </li>
                <li><Link href={"/S5/SSMP-Lab"}> 2.SSMP </Link> </li>
            </ul>
        </div>
    )
}

export default page;