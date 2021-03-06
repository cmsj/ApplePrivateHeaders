/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/Versions/A/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <BackBoardServices/BKSHIDEventBaseAttributes.h>

@interface BKSHIDEventRedirectAttributes : BKSHIDEventBaseAttributes {

	int _pid;

}

@property (assign,nonatomic) int pid;              //@synthesize pid=_pid - In the implementation block
+(id)protobufSchema;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)pid;
-(void)appendDescriptionToFormatter:(id)arg1 ;
-(void)setPid:(int)arg1 ;
@end

