/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/Versions/A/TrialProto
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString;

@interface TRIPBOneofDescriptor : NSObject {

	const char* name_;
	NSArray* fields_;
	SEL caseSel_;

}

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSArray * fields; 
-(void)dealloc;
-(NSString *)name;
-(NSArray *)fields;
-(id)fieldWithNumber:(unsigned)arg1 ;
-(id)initWithName:(const char*)arg1 fields:(id)arg2 ;
-(id)fieldWithName:(id)arg1 ;
@end

