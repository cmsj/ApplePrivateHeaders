/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/Versions/A/SampleAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableArray;

@interface SASymbol : NSObject {

	unsigned long long _offsetIntoSegment;
	unsigned long long _length;
	NSString* _name;
	NSMutableArray* _sourceInfos;

}

@property (readonly) unsigned long long offsetIntoSegment; 
@property (readonly) unsigned long long length; 
@property (readonly) NSString * name; 
@property (readonly) unsigned long long offsetIntoTextSegment; 
-(unsigned long long)offsetIntoTextSegment;
-(id)debugDescription;
-(unsigned long long)length;
-(NSString *)name;
-(unsigned long long)offsetIntoSegment;
@end

