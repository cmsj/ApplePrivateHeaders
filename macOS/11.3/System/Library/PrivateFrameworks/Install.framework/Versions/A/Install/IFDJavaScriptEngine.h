/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Install.framework/Versions/A/Install
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Install/Install-Structs.h>
@class NSString;

@interface IFDJavaScriptEngine : NSObject {

	OpaqueJSContextRef _ctx;
	NSString* _script;

}
-(void)dealloc;
-(id)init;
-(void)setDocument:(id)arg1 ;
-(void)setSearchContext:(id)arg1 ;
-(void)setCurrentBundle:(CFBundleRef)arg1 ;
-(void)setChoicesDelegate:(id)arg1 ;
-(void)setDistributionScriptsPath:(id)arg1 ;
-(id)initWithScript:(id)arg1 allowInsecure:(char)arg2 ;
-(void)setTargetDelegate:(id)arg1 ;
-(void)setTargetContentsIgnored:(char)arg1 ;
-(char)initRuntime;
-(void)setCurrentChoiceID:(id)arg1 ;
-(void*)callJSFunction:(id)arg1 ;
-(void*)callJSFunction:(id)arg1 storingResultsIn:(id)arg2 ;
@end
