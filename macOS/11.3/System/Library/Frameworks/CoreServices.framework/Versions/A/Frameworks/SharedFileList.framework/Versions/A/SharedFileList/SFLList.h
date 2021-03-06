/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/SharedFileList.framework/Versions/A/SharedFileList
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SharedFileList/SharedFileList-Structs.h>
@interface SFLList : NSObject
+(id)itemByInsertingAfterItem:(id)arg1 name:(id)arg2 bookmark:(id)arg3 propertiesToSet:(id)arg4 propertiesToClear:(id)arg5 list:(id)arg6 ;
+(id)itemByInsertingAfterItem:(id)arg1 name:(id)arg2 URL:(id)arg3 propertiesToSet:(id)arg4 propertiesToClear:(id)arg5 list:(id)arg6 ;
+(LSBindingRef)copyBindingFromItem:(id)arg1 ;
+(char)resolveItem:(id)arg1 resolutionFlags:(unsigned)arg2 error:(id*)arg3 ;
+(id)itemByInsertingAfterItem:(id)arg1 name:(id)arg2 aliasPtr:(void*)arg3 aliasSize:(unsigned)arg4 propertiesToSet:(id)arg5 propertiesToClear:(id)arg6 list:(id)arg7 ;
+(id)itemByInsertingAfterItem:(id)arg1 name:(id)arg2 fsRef:(const FSRef*)arg3 propertiesToSet:(id)arg4 propertiesToClear:(id)arg5 list:(id)arg6 ;
+(OpaqueIconRefRef)copyIconRefFromItem:(id)arg1 ;
+(int)refreshResolvedPropertiesForItem:(id)arg1 ;
+(int)resolveItem:(id)arg1 resolutionFlags:(unsigned)arg2 URL:(id*)arg3 fsRef:(FSRef*)arg4 ;
+(id)propertyNamed:(id)arg1 item:(id)arg2 ;
+(int)setProperty:(id)arg1 forName:(id)arg2 item:(id)arg3 ;
@end

