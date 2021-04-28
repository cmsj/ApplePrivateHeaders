/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Versions/A/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Symbolication/Symbolication-Structs.h>
@interface VMUSymbolicator : NSObject {

	CSTypeRef _symbolicator;

}
+(id)symbolicatorForTask:(unsigned)arg1 ;
+(id)symbolicatorForPid:(int)arg1 ;
-(void)dealloc;
-(id)initWithTask:(unsigned)arg1 ;
-(id)sourceInfoForAddress:(unsigned long long)arg1 ;
-(id)symbolForAddress:(unsigned long long)arg1 ;
@end
