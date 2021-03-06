/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IOAccelMemoryInfo.framework/Versions/A/IOAccelMemoryInfo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface IOAccelMemoryOpenCLInfo : NSObject {

	int pid;
	NSString* cl_context;
	unsigned long long cl_mem;
	NSString* objectType;
	NSString* objectDescription;
	id _expansionData;

}

@property (assign) int pid; 
@property (retain) NSString * cl_context; 
@property (assign) unsigned long long cl_mem; 
@property (retain) NSString * objectType; 
@property (retain) NSString * objectDescription; 
-(NSString *)cl_context;
-(unsigned long long)cl_mem;
-(void)setCl_context:(NSString *)arg1 ;
-(void)setCl_mem:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)description;
-(int)pid;
-(NSString *)objectDescription;
-(NSString *)objectType;
-(void)setPid:(int)arg1 ;
-(void)setObjectType:(NSString *)arg1 ;
-(void)setObjectDescription:(NSString *)arg1 ;
@end

