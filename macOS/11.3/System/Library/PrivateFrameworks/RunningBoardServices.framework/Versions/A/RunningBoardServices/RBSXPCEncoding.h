/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/Versions/A/RunningBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RBSXPCEncoding <NSObject>
@required
-(void)encodeInt64:(long long)arg1 forKey:(id)arg2;
-(void)encodeObject:(id)arg1 forKey:(id)arg2;
-(void)encodeBool:(char)arg1 forKey:(id)arg2;
-(void)encodeDouble:(double)arg1 forKey:(id)arg2;
-(void)encodeXPCObject:(id)arg1 forKey:(id)arg2;
-(void)encodeCollection:(id)arg1 forKey:(id)arg2;
-(void)encodeUInt64:(unsigned long long)arg1 forKey:(id)arg2;

@end

