/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/iPodUpdater.framework/Versions/A/iPodUpdater
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iPodUpdater/iPodUpdater-Structs.h>
@class Pod;

@interface BreadCrumbController : NSObject {

	SCD_Struct_Br6 _headerRec;
	Pod* _pod;
	unsigned char _mode;

}
-(void)dealloc;
-(id)initWithPod:(id)arg1 mode:(unsigned char)arg2 ;
-(id)breadCrumbs;
-(id)newBreadCrumb;
-(int)readHeader;
-(int)writeHeader;
@end
