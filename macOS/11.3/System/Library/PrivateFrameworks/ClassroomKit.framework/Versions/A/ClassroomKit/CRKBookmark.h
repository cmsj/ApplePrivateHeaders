/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/Versions/A/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL, NSArray;

@interface CRKBookmark : NSObject <NSSecureCoding> {

	NSString* _name;
	NSURL* _URL;
	NSArray* _children;
	NSString* _identifier;

}

@property (nonatomic,copy,readonly) NSString * identifier;                                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSURL * URL;                                                      //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy) NSArray * children;                                                 //@synthesize children=_children - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                           //@synthesize name=_name - In the implementation block
@property (getter=isFavoritesFolder,nonatomic,readonly) char favoritesFolder; 
@property (getter=isReadingListFolder,nonatomic,readonly) char readingListFolder; 
+(char)supportsSecureCoding;
+(id)folderWithName:(id)arg1 children:(id)arg2 identifier:(id)arg3 ;
+(id)favoritesFolderWithChildren:(id)arg1 ;
+(id)readingListFolderWithChildren:(id)arg1 ;
+(id)folderWithName:(id)arg1 children:(id)arg2 ;
+(id)leafBookmarkWithName:(id)arg1 URL:(id)arg2 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(NSArray *)children;
-(void)setChildren:(NSArray *)arg1 ;
-(id)urlString;
-(void)setUrlString:(id)arg1 ;
-(char)isFolder;
-(id)initWithName:(id)arg1 URL:(id)arg2 children:(id)arg3 identifier:(id)arg4 ;
-(char)isFavoritesFolder;
-(char)isReadingListFolder;
-(char)isFolderWithIdentifier:(id)arg1 ;
-(id)childBookmarks;
-(void)setChildBookmarks:(id)arg1 ;
@end

