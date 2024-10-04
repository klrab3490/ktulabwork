import React from "react";
import Link from "next/link";

export default function page() {
    return (
        <div className="flex-center text-xl">
            <div className="text-center underline"><Link href={"/S3/DS-Lab"}>Semester 3 - Data Structure Lab</Link></div>
            <div className="flex items-center justify-between">
                <Link href={"/S3/DS-Lab/Exp1c"}>Previous</Link>
                <div className="text-center underline">Exp1d - De-Queue</div>
                <Link href={"/S3/DS-Lab/Exp2a"}>Next</Link>
            </div>
            
        </div>
    )
}
