/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/Versions/A/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface MPMediaQuerySectionInfo : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	NSArray* _sections;
	NSArray* _sectionIndexTitles;
	char _hasUnknownSection;

}

@property (nonatomic,copy) NSArray * sectionIndexTitles; 
@property (nonatomic,copy,readonly) NSArray * sections;               //@synthesize sections=_sections - In the implementation block
@property (assign,nonatomic) char hasUnknownSection;                  //@synthesize hasUnknownSection=_hasUnknownSection - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)sections;
-(NSArray *)sectionIndexTitles;
-(void)setSectionIndexTitles:(NSArray *)arg1 ;
-(unsigned long long)indexOfSectionForSectionIndexTitleAtIndex:(unsigned long long)arg1 ;
-(char)hasUnknownSection;
-(void)setHasUnknownSection:(char)arg1 ;
@end

