import React from "react";
import Link from "next/link";

export default function page() {
    return (
        <div className="flex-center text-xl">
            <div className="text-center underline"><Link href={"/S3/DS-Lab"}>Semester 3 - Data Structure Lab</Link></div>
            <div className="flex items-center justify-between">
                <Link href={"/S3/DS-Lab/Exp6b"}>Previous</Link>
                <div className="text-center underline">Exp6c - Insertion Sort</div>
                <Link href={"/S3/DS-Lab/Exp6d"}>Next</Link>
            </div>
            
        </div>
    )
}
