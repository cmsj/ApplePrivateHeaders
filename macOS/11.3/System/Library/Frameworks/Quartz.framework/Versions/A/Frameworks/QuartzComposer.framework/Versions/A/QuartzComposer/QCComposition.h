/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSDictionary, NSString;

@interface QCComposition : NSObject <NSCopying> {

	NSArray* _protocols;
	NSDictionary* _attributes;
	NSArray* _inputKeys;
	NSArray* _outputKeys;
	id _backing;
	NSString* _identifier;
	double _timestamp;
	char _stateOK;

}
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)initialize;
+(id)compositionWithFile:(id)arg1 ;
+(id)compositionWithData:(id)arg1 ;
+(char)isCompositionIdentity:(id)arg1 ;
+(id)compositionWithURL:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)identifier;
-(id)filePath;
-(double)_timestamp;
-(id)attributes;
-(id)_backing;
-(id)protocols;
-(id)composition;
-(id)inputKeys;
-(id)patch;
-(id)outputKeys;
-(id)initWithComposition:(id)arg1 ;
-(id)initWithCompositionFile:(id)arg1 safeMode:(char)arg2 requiredProtocol:(id)arg3 ;
-(char)_stateOK;
-(void)_reclaimResources;
-(id)_initWithBacking:(id)arg1 ;
-(id)_makePatch;
-(id)initWithPatchName:(id)arg1 ;
-(id)defaultInputParameters;
@end

