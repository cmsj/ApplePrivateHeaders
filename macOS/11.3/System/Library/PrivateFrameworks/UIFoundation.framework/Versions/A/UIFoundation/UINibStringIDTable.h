/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/Versions/A/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIFoundation/UIFoundation-Structs.h>
@interface UINibStringIDTable : NSObject {

	UIStringIDTableBucket* table;
	UIStringIDTableBucket* buckets;
	unsigned long long hashMask;
	unsigned long long count;

}
-(void)dealloc;
-(long long)count;
-(id)initWithKeysTransferingOwnership:(id*)arg1 count:(unsigned long long)arg2 ;
-(char)lookupKey:(id)arg1 identifier:(long long*)arg2 ;
@end
