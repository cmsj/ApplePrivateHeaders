/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Frameworks/OpusKit.framework/Versions/A/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKDocumentCanvas.h>

@class NSString, NSMutableDictionary;

@interface OKDocumentCouchStep : OKDocumentCanvas {

	NSString* _anchorPage;
	NSString* _script;
	double _duration;
	NSMutableDictionary* _internalSettings;

}

@property (nonatomic,copy,readonly) NSString * anchorPage;              //@synthesize anchorPage=_anchorPage - In the implementation block
@property (nonatomic,copy,readonly) NSString * script;                  //@synthesize script=_script - In the implementation block
@property (nonatomic,readonly) double duration;                         //@synthesize duration=_duration - In the implementation block
+(id)couchStepWithAnchorPageName:(id)arg1 script:(id)arg2 duration:(double)arg3 settings:(id)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)init;
-(id)dictionary;
-(double)duration;
-(id)nextStep;
-(NSString *)script;
-(void)resolveIfNeeded;
-(id)parentCouch;
-(NSString *)anchorPage;
-(id)initWithDictionary:(id)arg1 forDocument:(id)arg2 andCouch:(id)arg3 ;
@end

