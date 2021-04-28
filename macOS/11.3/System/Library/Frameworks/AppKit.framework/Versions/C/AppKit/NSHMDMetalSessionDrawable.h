/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSHMDMetalSessionDrawable.h>
@class NSHMDMetalSession;


@protocol NSHMDMetalSessionDrawable <MTLDrawable>
@property (readonly) NSHMDMetalSession * session; 
@property (readonly) id<MTLTexture> texture; 
@property (assign) double inputTimeStamp; 
@property (assign) unsigned long long debugSignpost; 
@required
-(id<MTLTexture>)texture;
-(NSHMDMetalSession *)session;
-(double)inputTimeStamp;
-(void)setInputTimeStamp:(double)arg1;
-(unsigned long long)debugSignpost;
-(void)setDebugSignpost:(unsigned long long)arg1;

@end

#import <libobjc.A.dylib/MTLDrawableSPI.h>

@class NSHMDMetalSession, NSHMDIOSurfaceDrawable, NSString;

@interface NSHMDMetalSessionDrawable : NSObject <NSHMDMetalSessionDrawable, MTLDrawableSPI> {

	NSHMDMetalSession* _session;
	NSHMDIOSurfaceDrawable* _drawable;
	/*^block*/id _presentScheduledHandler;
	/*^block*/id _presentedHandler;

}

@property (readonly) NSHMDMetalSession * session; 
@property (readonly) id<MTLTexture> texture; 
@property (assign) double inputTimeStamp; 
@property (assign) unsigned long long debugSignpost; 
@property (nonatomic,readonly) double presentedTime; 
@property (nonatomic,readonly) unsigned long long drawableID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long status; 
-(void)dealloc;
-(unsigned long long)status;
-(id<MTLTexture>)texture;
-(NSHMDMetalSession *)session;
-(double)inputTimeStamp;
-(void)setInputTimeStamp:(double)arg1 ;
-(unsigned long long)debugSignpost;
-(void)setDebugSignpost:(unsigned long long)arg1 ;
-(void)presentAtTimestamp:(double)arg1 ;
-(double)presentedTime;
-(id)initWithSession:(id)arg1 surfaceDrawable:(id)arg2 ;
-(void)present;
-(void)presentAtTime:(double)arg1 ;
-(void)presentAfterMinimumDuration:(double)arg1 ;
-(void)addPresentedHandler:(/*^block*/id)arg1 ;
-(unsigned long long)drawableID;
-(void)addPresentScheduledHandler:(/*^block*/id)arg1 ;
@end
