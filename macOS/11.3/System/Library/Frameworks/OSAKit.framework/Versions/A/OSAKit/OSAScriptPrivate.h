/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/OSAKit.framework/Versions/A/OSAKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OSAKit/OSAKit-Structs.h>
@class NSString, NSURL, NSDate, OSALanguageInstance, NSAppleEventDescriptor;

@interface OSAScriptPrivate : NSObject {

	NSString* _source;
	unsigned _compiledScriptID;
	void* _reserved1;
	void* _reserved2;
	NSURL* _url;
	char _dontSetScriptLocation;
	char _isExecuting;
	NSDate* _date;
	OSALanguageInstance* _languageInstance;
	opaque_pthread_t* _executionThread;
	NSAppleEventDescriptor* _defaultTarget;

}
-(void)finalize;
-(void)dealloc;
-(id)init;
@end
