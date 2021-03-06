/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DiskImages2.framework/Versions/A/DiskImages2
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DiskImages2/DiskImages2-Structs.h>
#import <DiskImages2/DiskImageParamsRaw_XPC.h>

@interface DiskImageParamsRAM_XPC : DiskImageParamsRaw_XPC
+(char)supportsSecureCoding;
-(id)initWithURL:(id)arg1 error:(id*)arg2 ;
-(void)setBlockSize:(unsigned long long)arg1 ;
-(unique_ptr<DiskImage, std::__1::default_delete<DiskImage>>*)createDiskImage;
@end

