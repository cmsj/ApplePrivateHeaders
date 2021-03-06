/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSHMDIOSurfaceSession, NSSLSHMDDrawable, IOSurface;

@interface NSHMDIOSurfaceDrawable : NSObject {

	NSHMDIOSurfaceSession* _session;
	NSSLSHMDDrawable* _drawable;
	double _inputTimestamp;
	double _presentedTime;

}

@property (readonly) NSHMDIOSurfaceSession * session; 
@property (readonly) IOSurface * IOSurface; 
@property (assign) double inputTimeStamp; 
@property (assign) unsigned long long debugSignpost; 
@property (readonly) double presentedTime; 
-(void)dealloc;
-(IOSurface *)IOSurface;
-(id)initWithSession:(id)arg1 SLSHMDDrawable:(id)arg2 ;
-(NSHMDIOSurfaceSession *)session;
-(double)inputTimeStamp;
-(void)setInputTimeStamp:(double)arg1 ;
-(unsigned long long)debugSignpost;
-(void)setDebugSignpost:(unsigned long long)arg1 ;
-(void)presentAtTimestamp:(double)arg1 ;
-(double)presentedTime;
@end

