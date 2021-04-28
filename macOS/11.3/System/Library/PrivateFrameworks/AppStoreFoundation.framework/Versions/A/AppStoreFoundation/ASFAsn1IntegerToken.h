/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppStoreFoundation.framework/Versions/A/AppStoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreFoundation/ASFAsn1Token.h>

@interface ASFAsn1IntegerToken : ASFAsn1Token {

	unsigned long long mValue;

}

@property (readonly) unsigned long long value; 
-(id)description;
-(unsigned long long)value;
-(id)_initWithID:(unsigned long long)arg1 class:(unsigned char)arg2 length:(unsigned long long)arg3 content:(const char*)arg4 opaque:(char)arg5 ;
@end
