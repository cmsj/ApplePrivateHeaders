/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/Versions/A/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ClassroomKit/ClassroomKit-Structs.h>
@class NSString;

@interface CRKFTSEnumeration : NSObject {

	NSString* mDirectoryPath;
	int mOptions;

}
+(int)defaultOptions;
-(id)init;
-(id)initWithDirectoryPath:(id)arg1 ;
-(id)entriesWithError:(id*)arg1 ;
-(id)initWithDirectoryPath:(id)arg1 options:(int)arg2 ;
-(SCD_Struct_CR3*)makeFTSWithError:(id*)arg1 ;
-(id)readAllEntriesFromFTS:(SCD_Struct_CR3*)arg1 error:(id*)arg2 ;
-(void)closeFTS:(SCD_Struct_CR3*)arg1 ;
-(id)readNextEntryFromFTS:(SCD_Struct_CR3*)arg1 error:(id*)arg2 ;
-(char)shouldSkipEntry:(ftsent*)arg1 ;
@end

