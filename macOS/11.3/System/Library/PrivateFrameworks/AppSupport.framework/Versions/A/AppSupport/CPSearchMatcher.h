/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/Versions/A/AppSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSData;

@interface CPSearchMatcher : NSObject {

	int _options;
	NSArray* _components;
	NSArray* _asciiComponents;
	NSData* _wholeSearchStringData;
	NSData* _context;

}
-(void)dealloc;
-(char)matches:(id)arg1 ;
-(char)matchesUTF8String:(const char*)arg1 matchType:(int)arg2 matchOptions:(int)arg3 ;
-(char)matchesASCIIString:(const char*)arg1 matchType:(int)arg2 ;
-(char)matchesUTF8String:(const char*)arg1 ;
-(char)matchesUTF8String:(const char*)arg1 matchType:(int)arg2 ;
-(id)initWithSearchString:(id)arg1 andLocale:(id)arg2 andOptions:(int)arg3 ;
-(char)matches:(id)arg1 matchType:(int)arg2 ;
-(id)initWithSearchString:(id)arg1 ;
-(id)initWithSearchString:(id)arg1 andLocale:(id)arg2 ;
-(id)initWithSearchString:(id)arg1 options:(int)arg2 ;
@end
