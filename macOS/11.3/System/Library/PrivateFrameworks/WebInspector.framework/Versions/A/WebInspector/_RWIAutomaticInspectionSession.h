/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/Versions/A/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, NSNumber;

@interface _RWIAutomaticInspectionSession : NSObject {

	NSString* _identifier;
	NSArray* _debuggers;
	NSNumber* _pageId;
	NSString* _applicationIdentifier;
	unsigned long long _currentDebuggerIndex;

}

@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSArray * debuggers;                //@synthesize debuggers=_debuggers - In the implementation block
-(NSString *)identifier;
-(void)start;
-(void)_sendQuery;
-(id)initWithPageId:(id)arg1 applicationIdentifier:(id)arg2 debuggers:(id)arg3 ;
-(char)receivedRejectResponse;
-(char)matchesPageId:(id)arg1 applicationIdentifier:(id)arg2 ;
-(NSArray *)debuggers;
@end

