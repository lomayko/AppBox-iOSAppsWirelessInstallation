///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBSHARINGGroupMembershipInfo;
@class DBSHARINGInviteeMembershipInfo;
@class DBSHARINGSharedFolderMembers;
@class DBSHARINGUserMembershipInfo;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `SharedFolderMembers` struct.
///
/// Shared folder user and group membership.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBSHARINGSharedFolderMembers : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The list of user members of the shared folder.
@property (nonatomic, readonly) NSArray<DBSHARINGUserMembershipInfo *> *users;

/// The list of group members of the shared folder.
@property (nonatomic, readonly) NSArray<DBSHARINGGroupMembershipInfo *> *groups;

/// The list of invitees to the shared folder.
@property (nonatomic, readonly) NSArray<DBSHARINGInviteeMembershipInfo *> *invitees;

/// Present if there are additional shared folder members that have not been
/// returned yet. Pass the cursor into `listFolderMembersContinue` to list
/// additional members.
@property (nonatomic, readonly, copy, nullable) NSString *cursor;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param users The list of user members of the shared folder.
/// @param groups The list of group members of the shared folder.
/// @param invitees The list of invitees to the shared folder.
/// @param cursor Present if there are additional shared folder members that
/// have not been returned yet. Pass the cursor into `listFolderMembersContinue`
/// to list additional members.
///
/// @return An initialized instance.
///
- (instancetype)initWithUsers:(NSArray<DBSHARINGUserMembershipInfo *> *)users
                       groups:(NSArray<DBSHARINGGroupMembershipInfo *> *)groups
                     invitees:(NSArray<DBSHARINGInviteeMembershipInfo *> *)invitees
                       cursor:(nullable NSString *)cursor;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param users The list of user members of the shared folder.
/// @param groups The list of group members of the shared folder.
/// @param invitees The list of invitees to the shared folder.
///
/// @return An initialized instance.
///
- (instancetype)initWithUsers:(NSArray<DBSHARINGUserMembershipInfo *> *)users
                       groups:(NSArray<DBSHARINGGroupMembershipInfo *> *)groups
                     invitees:(NSArray<DBSHARINGInviteeMembershipInfo *> *)invitees;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `SharedFolderMembers` struct.
///
@interface DBSHARINGSharedFolderMembersSerializer : NSObject

///
/// Serializes `DBSHARINGSharedFolderMembers` instances.
///
/// @param instance An instance of the `DBSHARINGSharedFolderMembers` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBSHARINGSharedFolderMembers` API object.
///
+ (nullable NSDictionary *)serialize:(DBSHARINGSharedFolderMembers *)instance;

///
/// Deserializes `DBSHARINGSharedFolderMembers` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBSHARINGSharedFolderMembers` API object.
///
/// @return An instantiation of the `DBSHARINGSharedFolderMembers` object.
///
+ (DBSHARINGSharedFolderMembers *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
