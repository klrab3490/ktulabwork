import React from "react";
import Link from "next/link";

export default function page() {
    return (
        <div className="flex-center text-xl">
            <div className="text-center underline"><Link href={"/S3/DS-Lab"}>Semester 3 - Data Structure Lab</Link></div>
            <div className="flex items-center justify-between">
                <Link href={"/S3/DS-Lab/Exp7b"}>Previous</Link>
                <div className="text-center underline">Exp8 - Polynomial Addition & Multiplication</div>
                <Link href={"/S3/DS-Lab/Exp9"}>Next</Link>
            </div>
            
        </div>
    )
}
