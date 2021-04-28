/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreImage.framework/Versions/A/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreImage/CoreImage-Structs.h>
@interface CIFilterGeneratorConnection : NSObject {

	CIFilterGeneratorConnectionStruct* _generatorConnectionStruct;

}
+(id)connectionWithSourceObject:(id)arg1 sourceKey:(id)arg2 targetObject:(id)arg3 targetKey:(id)arg4 userInfo:(id)arg5 ;
-(id)targetKey;
-(id)initWithSourceObject:(id)arg1 sourceKey:(id)arg2 targetObject:(id)arg3 targetKey:(id)arg4 userInfo:(id)arg5 ;
-(void)finalize;
-(void)dealloc;
-(id)description;
-(void)setType:(int)arg1 ;
-(id)userInfo;
-(int)type;
-(void)setUserInfo:(id)arg1 ;
-(id)sourceKey;
-(id)sourceObject;
-(id)targetObject;
@end
