/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/PagesQuicklook.framework/Versions/A/PagesQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PagesQuicklook/PagesQuicklook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TPPageIndexPath : NSObject <NSCopying> {

	unsigned long long _sectionIndex;
	unsigned long long _pageIndex;

}

@property (assign,nonatomic) unsigned long long sectionIndex;              //@synthesize sectionIndex=_sectionIndex - In the implementation block
@property (assign,nonatomic) unsigned long long pageIndex;                 //@synthesize pageIndex=_pageIndex - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(unsigned long long)sectionIndex;
-(void)setSectionIndex:(unsigned long long)arg1 ;
-(unsigned long long)pageIndex;
-(void)setPageIndex:(unsigned long long)arg1 ;
-(id)initWithSectionIndex:(unsigned long long)arg1 pageIndex:(unsigned long long)arg2 ;
@end

