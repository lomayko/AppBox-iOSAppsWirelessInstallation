///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBPAPERListPaperDocsFilterBy;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `ListPaperDocsFilterBy` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBPAPERListPaperDocsFilterBy : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBPAPERListPaperDocsFilterByTag` enum type represents the possible tag
/// states with which the `DBPAPERListPaperDocsFilterBy` union can exist.
typedef NS_ENUM(NSInteger, DBPAPERListPaperDocsFilterByTag) {
  /// Fetches all Paper doc IDs that the user has ever accessed.
  DBPAPERListPaperDocsFilterByDocsAccessed,

  /// Fetches only the Paper doc IDs that the user has created.
  DBPAPERListPaperDocsFilterByDocsCreated,

  /// (no description).
  DBPAPERListPaperDocsFilterByOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBPAPERListPaperDocsFilterByTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "docs_accessed".
///
/// Description of the "docs_accessed" tag state: Fetches all Paper doc IDs that
/// the user has ever accessed.
///
/// @return An initialized instance.
///
- (instancetype)initWithDocsAccessed;

///
/// Initializes union class with tag state of "docs_created".
///
/// Description of the "docs_created" tag state: Fetches only the Paper doc IDs
/// that the user has created.
///
/// @return An initialized instance.
///
- (instancetype)initWithDocsCreated;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "docs_accessed".
///
/// @return Whether the union's current tag state has value "docs_accessed".
///
- (BOOL)isDocsAccessed;

///
/// Retrieves whether the union's current tag state has value "docs_created".
///
/// @return Whether the union's current tag state has value "docs_created".
///
- (BOOL)isDocsCreated;

///
/// Retrieves whether the union's current tag state has value "other".
///
/// @return Whether the union's current tag state has value "other".
///
- (BOOL)isOther;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString *)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBPAPERListPaperDocsFilterBy` union.
///
@interface DBPAPERListPaperDocsFilterBySerializer : NSObject

///
/// Serializes `DBPAPERListPaperDocsFilterBy` instances.
///
/// @param instance An instance of the `DBPAPERListPaperDocsFilterBy` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBPAPERListPaperDocsFilterBy` API object.
///
+ (NSDictionary *)serialize:(DBPAPERListPaperDocsFilterBy *)instance;

///
/// Deserializes `DBPAPERListPaperDocsFilterBy` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBPAPERListPaperDocsFilterBy` API object.
///
/// @return An instantiation of the `DBPAPERListPaperDocsFilterBy` object.
///
+ (DBPAPERListPaperDocsFilterBy *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END