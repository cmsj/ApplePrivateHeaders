/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UIRecording.framework/Versions/A/UIRecording
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIRecording/UIRecording-Structs.h>
#import <UIRecording/UIRAccessibilityElement.h>

@class NSString;

@interface UIRAccessibilityProcess : UIRAccessibilityElement {

	LSASNRef _LSASNRef;
	ProcessSerialNumber _psn;
	CFDictionaryRef _applicationInfo;
	NSString* _title;

}
+(id)processes;
+(id)processWithUnixID:(int)arg1 ;
+(id)processWithName:(id)arg1 ;
+(id)processesWithUnixIDs:(id)arg1 ;
-(void)dealloc;
-(id)bundleIdentifier;
-(unsigned long long)uniqueID;
-(id)title;
-(id)displayedName;
-(id)initWithPSN:(ProcessSerialNumber)arg1 ;
-(ProcessSerialNumber)processSerialNumber;
-(id)initWithLSASNRef:(LSASNRef)arg1 ;
-(long long)unixID;
@end

