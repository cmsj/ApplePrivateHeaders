/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/Versions/A/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoFoundation/PhotoFoundation-Structs.h>
#import <PhotoFoundation/PFDiskCacheFile.h>

@interface PFDiskCacheFile_PFPurgeableData : PFDiskCacheFile
-(char)_readFileFormatHeader:(SCD_Struct_PF5*)arg1 ;
-(id)_readObj:(int)arg1 queue:(id)arg2 ;
-(char)_writeObj:(id)arg1 queue:(id)arg2 ;
-(char)_writePurgeableData:(id)arg1 queue:(id)arg2 ;
-(char)_writeNSData:(id)arg1 queue:(id)arg2 ;
@end
