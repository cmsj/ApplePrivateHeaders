/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Install.framework/Versions/A/Install
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSString, IFDJavaScriptEngine;

@interface IFInstallActionsGroup : NSObject {

	NSMutableArray* _actions;
	NSString* _script;
	IFDJavaScriptEngine* _engine;

}
-(void)dealloc;
-(id)init;
-(void)setActions:(id)arg1 ;
-(id)actions;
-(void)addAction:(id)arg1 ;
-(void)setScript:(id)arg1 ;
-(char)addActionsFromXMLElement:(id)arg1 scripts:(id)arg2 ;
-(int)highestAuthorization;
-(id)runWithQueueElement:(id)arg1 ;
-(id)jsEngine;
@end

