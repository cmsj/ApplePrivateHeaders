/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@interface NSArrayChange : NSObject

@property (readonly) unsigned long long changeType; 
@property (readonly) unsigned long long sourceIndex; 
@property (readonly) unsigned long long destinationIndex; 
@property (readonly) id value; 
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)value;
-(unsigned long long)changeType;
-(id)initWithType:(unsigned long long)arg1 sourceIndex:(unsigned long long)arg2 destinationIndex:(unsigned long long)arg3 value:(id)arg4 ;
-(unsigned long long)sourceIndex;
-(unsigned long long)destinationIndex;
@end
