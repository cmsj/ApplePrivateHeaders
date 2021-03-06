/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Metal.framework/Versions/A/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Metal/Metal-Structs.h>
@class MTLDebugInstrumentationData, NSString;

@interface MTLDebugSubProgram : NSObject {

	MTLDebugInstrumentationData* _data;
	DebugSubProgram* _debugSubProgram;

}

@property (nonatomic,readonly) NSString * filename; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) unsigned line; 
-(oneway void)releaseInternal;
-(id)retain;
-(oneway void)release;
-(NSString *)name;
-(NSString *)filename;
-(unsigned)line;
@end

