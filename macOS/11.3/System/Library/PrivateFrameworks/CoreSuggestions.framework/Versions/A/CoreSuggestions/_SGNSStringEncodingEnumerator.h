/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/Versions/A/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <CoreFoundation/NSEnumerator.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSString;

@interface _SGNSStringEncodingEnumerator : NSEnumerator <NSFastEnumeration> {

	NSString* _string;
	unsigned long long _encoding;
	NSRange _remaining;
	char _needsBOM;
	char _needsNullTermination;

}
-(id)init;
-(id)nextObject;
-(id)initWithString:(id)arg1 encoding:(unsigned long long)arg2 nullTerminated:(char)arg3 ;
-(id)nullTerminationIfNeeded;
@end
