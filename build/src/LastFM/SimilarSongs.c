/* SimilarSongs.c generated by valac 0.11.7, the Vala compiler
 * generated from SimilarSongs.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <gee.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <libxml/parser.h>
#include <libxml/tree.h>


#define LAST_FM_TYPE_SIMILAR_SONGS (last_fm_similar_songs_get_type ())
#define LAST_FM_SIMILAR_SONGS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), LAST_FM_TYPE_SIMILAR_SONGS, LastFMSimilarSongs))
#define LAST_FM_SIMILAR_SONGS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), LAST_FM_TYPE_SIMILAR_SONGS, LastFMSimilarSongsClass))
#define LAST_FM_IS_SIMILAR_SONGS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), LAST_FM_TYPE_SIMILAR_SONGS))
#define LAST_FM_IS_SIMILAR_SONGS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), LAST_FM_TYPE_SIMILAR_SONGS))
#define LAST_FM_SIMILAR_SONGS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), LAST_FM_TYPE_SIMILAR_SONGS, LastFMSimilarSongsClass))

typedef struct _LastFMSimilarSongs LastFMSimilarSongs;
typedef struct _LastFMSimilarSongsClass LastFMSimilarSongsClass;
typedef struct _LastFMSimilarSongsPrivate LastFMSimilarSongsPrivate;

#define BEAT_BOX_TYPE_SONG (beat_box_song_get_type ())
#define BEAT_BOX_SONG(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), BEAT_BOX_TYPE_SONG, BeatBoxSong))
#define BEAT_BOX_SONG_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), BEAT_BOX_TYPE_SONG, BeatBoxSongClass))
#define BEAT_BOX_IS_SONG(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), BEAT_BOX_TYPE_SONG))
#define BEAT_BOX_IS_SONG_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), BEAT_BOX_TYPE_SONG))
#define BEAT_BOX_SONG_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), BEAT_BOX_TYPE_SONG, BeatBoxSongClass))

typedef struct _BeatBoxSong BeatBoxSong;
typedef struct _BeatBoxSongClass BeatBoxSongClass;

#define BEAT_BOX_TYPE_LIBRARY_MANAGER (beat_box_library_manager_get_type ())
#define BEAT_BOX_LIBRARY_MANAGER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), BEAT_BOX_TYPE_LIBRARY_MANAGER, BeatBoxLibraryManager))
#define BEAT_BOX_LIBRARY_MANAGER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), BEAT_BOX_TYPE_LIBRARY_MANAGER, BeatBoxLibraryManagerClass))
#define BEAT_BOX_IS_LIBRARY_MANAGER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), BEAT_BOX_TYPE_LIBRARY_MANAGER))
#define BEAT_BOX_IS_LIBRARY_MANAGER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), BEAT_BOX_TYPE_LIBRARY_MANAGER))
#define BEAT_BOX_LIBRARY_MANAGER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), BEAT_BOX_TYPE_LIBRARY_MANAGER, BeatBoxLibraryManagerClass))

typedef struct _BeatBoxLibraryManager BeatBoxLibraryManager;
typedef struct _BeatBoxLibraryManagerClass BeatBoxLibraryManagerClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))
typedef struct _Block2Data Block2Data;
#define _g_free0(var) (var = (g_free (var), NULL))

struct _LastFMSimilarSongs {
	GObject parent_instance;
	LastFMSimilarSongsPrivate * priv;
};

struct _LastFMSimilarSongsClass {
	GObjectClass parent_class;
	void (*queryForSimilar) (LastFMSimilarSongs* self, BeatBoxSong* s);
};

struct _LastFMSimilarSongsPrivate {
	BeatBoxLibraryManager* _lm;
	BeatBoxSong* _base;
	gboolean working;
	GeeLinkedList* similar;
	BeatBoxSong* similarToAdd;
};

struct _Block2Data {
	int _ref_count_;
	LastFMSimilarSongs * self;
	GeeLinkedList* similarIDs;
	GeeLinkedList* similarDont;
};


static gpointer last_fm_similar_songs_parent_class = NULL;

GType last_fm_similar_songs_get_type (void) G_GNUC_CONST;
GType beat_box_song_get_type (void) G_GNUC_CONST;
GType beat_box_library_manager_get_type (void) G_GNUC_CONST;
#define LAST_FM_SIMILAR_SONGS_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), LAST_FM_TYPE_SIMILAR_SONGS, LastFMSimilarSongsPrivate))
enum  {
	LAST_FM_SIMILAR_SONGS_DUMMY_PROPERTY
};
#define LAST_FM_SIMILAR_SONGS_MAX_FETCHED 20
LastFMSimilarSongs* last_fm_similar_songs_new (BeatBoxLibraryManager* lm);
LastFMSimilarSongs* last_fm_similar_songs_construct (GType object_type, BeatBoxLibraryManager* lm);
void last_fm_similar_songs_queryForSimilar (LastFMSimilarSongs* self, BeatBoxSong* s);
static void last_fm_similar_songs_real_queryForSimilar (LastFMSimilarSongs* self, BeatBoxSong* s);
void* last_fm_similar_songs_similar_thread_function (LastFMSimilarSongs* self);
static gpointer _last_fm_similar_songs_similar_thread_function_gthread_func (gpointer self);
static Block2Data* block2_data_ref (Block2Data* _data2_);
static void block2_data_unref (Block2Data* _data2_);
void last_fm_similar_songs_getSimilarTracks (LastFMSimilarSongs* self, const gchar* title, const gchar* artist);
const gchar* beat_box_song_get_title (BeatBoxSong* self);
const gchar* beat_box_song_get_artist (BeatBoxSong* self);
BeatBoxSong* beat_box_library_manager_song_from_name (BeatBoxLibraryManager* self, const gchar* title, const gchar* artist);
gint beat_box_song_get_rowid (BeatBoxSong* self);
static gboolean _lambda6_ (Block2Data* _data2_);
static gboolean __lambda6__gsource_func (gpointer self);
gchar* last_fm_core_fix_for_url (const gchar* fix);
#define LAST_FM_CORE_api "a40ea1720028bd40c66b17d7146b3f3b"
void last_fm_similar_songs_parse_similar_nodes (LastFMSimilarSongs* self, xmlNode* node, const gchar* parent);
BeatBoxSong* beat_box_song_new (const gchar* file);
BeatBoxSong* beat_box_song_construct (GType object_type, const gchar* file);
void beat_box_song_set_title (BeatBoxSong* self, const gchar* value);
void beat_box_song_set_lastfm_url (BeatBoxSong* self, const gchar* value);
void beat_box_song_set_artist (BeatBoxSong* self, const gchar* value);
static void g_cclosure_user_marshal_VOID__OBJECT_OBJECT (GClosure * closure, GValue * return_value, guint n_param_values, const GValue * param_values, gpointer invocation_hint, gpointer marshal_data);
static void last_fm_similar_songs_finalize (GObject* obj);


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


LastFMSimilarSongs* last_fm_similar_songs_construct (GType object_type, BeatBoxLibraryManager* lm) {
	LastFMSimilarSongs * self = NULL;
	BeatBoxLibraryManager* _tmp0_;
	g_return_val_if_fail (lm != NULL, NULL);
	self = (LastFMSimilarSongs*) g_object_new (object_type, NULL);
	_tmp0_ = _g_object_ref0 (lm);
	_g_object_unref0 (self->priv->_lm);
	self->priv->_lm = _tmp0_;
	self->priv->working = FALSE;
	return self;
}


LastFMSimilarSongs* last_fm_similar_songs_new (BeatBoxLibraryManager* lm) {
	return last_fm_similar_songs_construct (LAST_FM_TYPE_SIMILAR_SONGS, lm);
}


static gpointer _last_fm_similar_songs_similar_thread_function_gthread_func (gpointer self) {
	gpointer result;
	result = last_fm_similar_songs_similar_thread_function (self);
	return result;
}


static void last_fm_similar_songs_real_queryForSimilar (LastFMSimilarSongs* self, BeatBoxSong* s) {
	BeatBoxSong* _tmp0_;
	GError * _inner_error_ = NULL;
	g_return_if_fail (self != NULL);
	g_return_if_fail (s != NULL);
	_tmp0_ = _g_object_ref0 (s);
	_g_object_unref0 (self->priv->_base);
	self->priv->_base = _tmp0_;
	if (!self->priv->working) {
		self->priv->working = TRUE;
		g_thread_create (_last_fm_similar_songs_similar_thread_function_gthread_func, self, FALSE, &_inner_error_);
		if (_inner_error_ != NULL) {
			if (_inner_error_->domain == G_THREAD_ERROR) {
				goto __catch48_g_thread_error;
			}
			g_critical ("file %s: line %d: unexpected error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
			g_clear_error (&_inner_error_);
			return;
		}
		goto __finally48;
		__catch48_g_thread_error:
		{
			GError * err;
			err = _inner_error_;
			_inner_error_ = NULL;
			fprintf (stdout, "ERROR: Could not create similar thread: %s \n", err->message);
			_g_error_free0 (err);
		}
		__finally48:
		if (_inner_error_ != NULL) {
			g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
			g_clear_error (&_inner_error_);
			return;
		}
	}
}


void last_fm_similar_songs_queryForSimilar (LastFMSimilarSongs* self, BeatBoxSong* s) {
	LAST_FM_SIMILAR_SONGS_GET_CLASS (self)->queryForSimilar (self, s);
}


static Block2Data* block2_data_ref (Block2Data* _data2_) {
	g_atomic_int_inc (&_data2_->_ref_count_);
	return _data2_;
}


static void block2_data_unref (Block2Data* _data2_) {
	if (g_atomic_int_dec_and_test (&_data2_->_ref_count_)) {
		_g_object_unref0 (_data2_->self);
		_g_object_unref0 (_data2_->similarDont);
		_g_object_unref0 (_data2_->similarIDs);
		g_slice_free (Block2Data, _data2_);
	}
}


static gboolean _lambda6_ (Block2Data* _data2_) {
	LastFMSimilarSongs * self;
	gboolean result = FALSE;
	self = _data2_->self;
	g_signal_emit_by_name (self, "similar-retrieved", _data2_->similarIDs, _data2_->similarDont);
	result = FALSE;
	return result;
}


static gboolean __lambda6__gsource_func (gpointer self) {
	gboolean result;
	result = _lambda6_ (self);
	return result;
}


void* last_fm_similar_songs_similar_thread_function (LastFMSimilarSongs* self) {
	void* result = NULL;
	Block2Data* _data2_;
	GeeLinkedList* _tmp0_ = NULL;
	GeeLinkedList* _tmp1_ = NULL;
	GeeLinkedList* _tmp2_ = NULL;
	const gchar* _tmp3_ = NULL;
	const gchar* _tmp4_ = NULL;
	gint _tmp13_;
	g_return_val_if_fail (self != NULL, NULL);
	_data2_ = g_slice_new0 (Block2Data);
	_data2_->_ref_count_ = 1;
	_data2_->self = g_object_ref (self);
	_tmp0_ = gee_linked_list_new (BEAT_BOX_TYPE_SONG, (GBoxedCopyFunc) g_object_ref, g_object_unref, NULL);
	_g_object_unref0 (self->priv->similar);
	self->priv->similar = _tmp0_;
	_tmp1_ = gee_linked_list_new (G_TYPE_INT, NULL, NULL, NULL);
	_data2_->similarIDs = _tmp1_;
	_tmp2_ = gee_linked_list_new (BEAT_BOX_TYPE_SONG, (GBoxedCopyFunc) g_object_ref, g_object_unref, NULL);
	_data2_->similarDont = _tmp2_;
	_tmp3_ = beat_box_song_get_title (self->priv->_base);
	_tmp4_ = beat_box_song_get_artist (self->priv->_base);
	last_fm_similar_songs_getSimilarTracks (self, _tmp3_, _tmp4_);
	{
		GeeLinkedList* _tmp5_;
		GeeLinkedList* _sim_list;
		gint _tmp6_;
		gint _sim_size;
		gint _sim_index;
		_tmp5_ = _g_object_ref0 (self->priv->similar);
		_sim_list = _tmp5_;
		_tmp6_ = gee_collection_get_size ((GeeCollection*) _sim_list);
		_sim_size = _tmp6_;
		_sim_index = -1;
		while (TRUE) {
			gpointer _tmp7_ = NULL;
			BeatBoxSong* sim;
			const gchar* _tmp8_ = NULL;
			const gchar* _tmp9_ = NULL;
			BeatBoxSong* _tmp10_ = NULL;
			BeatBoxSong* s;
			gint _tmp11_;
			_sim_index = _sim_index + 1;
			if (!(_sim_index < _sim_size)) {
				break;
			}
			_tmp7_ = gee_abstract_list_get ((GeeAbstractList*) _sim_list, _sim_index);
			sim = (BeatBoxSong*) _tmp7_;
			_tmp8_ = beat_box_song_get_title (sim);
			_tmp9_ = beat_box_song_get_artist (sim);
			_tmp10_ = beat_box_library_manager_song_from_name (self->priv->_lm, _tmp8_, _tmp9_);
			s = _tmp10_;
			_tmp11_ = beat_box_song_get_rowid (s);
			if (_tmp11_ != 0) {
				gint _tmp12_;
				_tmp12_ = beat_box_song_get_rowid (s);
				gee_abstract_collection_add ((GeeAbstractCollection*) _data2_->similarIDs, GINT_TO_POINTER (_tmp12_));
			} else {
				gee_abstract_collection_add ((GeeAbstractCollection*) _data2_->similarDont, sim);
			}
			_g_object_unref0 (s);
			_g_object_unref0 (sim);
		}
		_g_object_unref0 (_sim_list);
	}
	_tmp13_ = beat_box_song_get_rowid (self->priv->_base);
	gee_deque_offer_head ((GeeDeque*) _data2_->similarIDs, GINT_TO_POINTER (_tmp13_));
	g_idle_add_full (G_PRIORITY_DEFAULT_IDLE, __lambda6__gsource_func, block2_data_ref (_data2_), block2_data_unref);
	self->priv->working = FALSE;
	result = NULL;
	block2_data_unref (_data2_);
	_data2_ = NULL;
	return result;
}


/** Gets similar songs
 * @param artist The artist of song to get similar to
 * @param title The title of song to get similar to
 * @return The songs that are similar
 */
void last_fm_similar_songs_getSimilarTracks (LastFMSimilarSongs* self, const gchar* title, const gchar* artist) {
	gchar* _tmp0_ = NULL;
	gchar* artist_fixed;
	gchar* _tmp1_ = NULL;
	gchar* title_fixed;
	gchar* _tmp2_;
	gchar* _tmp3_;
	gchar* _tmp4_;
	gchar* _tmp5_;
	gchar* _tmp6_;
	gchar* _tmp7_;
	gchar* _tmp8_;
	gchar* _tmp9_;
	gchar* _tmp10_;
	gchar* _tmp11_;
	gchar* url;
	xmlDoc* _tmp12_ = NULL;
	xmlDoc* doc;
	g_return_if_fail (self != NULL);
	g_return_if_fail (title != NULL);
	g_return_if_fail (artist != NULL);
	_tmp0_ = last_fm_core_fix_for_url (artist);
	artist_fixed = _tmp0_;
	_tmp1_ = last_fm_core_fix_for_url (title);
	title_fixed = _tmp1_;
	_tmp2_ = g_strconcat ("http://ws.audioscrobbler.com/2.0/?method=track.getsimilar&artist=", artist_fixed, NULL);
	_tmp3_ = _tmp2_;
	_tmp4_ = g_strconcat (_tmp3_, "&track=", NULL);
	_tmp5_ = _tmp4_;
	_tmp6_ = g_strconcat (_tmp5_, title_fixed, NULL);
	_tmp7_ = _tmp6_;
	_tmp8_ = g_strconcat (_tmp7_, "&api_key=", NULL);
	_tmp9_ = _tmp8_;
	_tmp10_ = g_strconcat (_tmp9_, LAST_FM_CORE_api, NULL);
	_tmp11_ = _tmp10_;
	_g_free0 (_tmp9_);
	_g_free0 (_tmp7_);
	_g_free0 (_tmp5_);
	_g_free0 (_tmp3_);
	url = _tmp11_;
	_tmp12_ = xmlParseFile (url);
	doc = _tmp12_;
	if (doc == NULL) {
		fprintf (stdout, "Could not load similar artist information for %s by %s\n", title, artist);
	} else {
		xmlNode* _tmp13_ = NULL;
		_tmp13_ = xmlDocGetRootElement (doc);
		if (_tmp13_ == NULL) {
			fprintf (stdout, "Oddly, similar artist information was invalid\n");
		} else {
			xmlNode* _tmp14_ = NULL;
			_g_object_unref0 (self->priv->similarToAdd);
			self->priv->similarToAdd = NULL;
			_tmp14_ = xmlDocGetRootElement (doc);
			last_fm_similar_songs_parse_similar_nodes (self, _tmp14_, "");
		}
	}
	xmlFreeDoc (doc);
	_g_free0 (url);
	_g_free0 (title_fixed);
	_g_free0 (artist_fixed);
}


void last_fm_similar_songs_parse_similar_nodes (LastFMSimilarSongs* self, xmlNode* node, const gchar* parent) {
	xmlNode* iter = NULL;
	g_return_if_fail (self != NULL);
	g_return_if_fail (parent != NULL);
	{
		gboolean _tmp0_;
		iter = node->children;
		_tmp0_ = TRUE;
		while (TRUE) {
			gchar* _tmp1_;
			gchar* node_name;
			gchar* _tmp2_ = NULL;
			gchar* node_content;
			gchar* _tmp4_;
			gchar* _tmp5_;
			if (!_tmp0_) {
				iter = iter->next;
			}
			_tmp0_ = FALSE;
			if (!(iter != NULL)) {
				break;
			}
			if (iter->type != XML_ELEMENT_NODE) {
				continue;
			}
			_tmp1_ = g_strdup (iter->name);
			node_name = _tmp1_;
			_tmp2_ = xmlNodeGetContent (iter);
			node_content = _tmp2_;
			if (g_strcmp0 (parent, "similartrackstrack") == 0) {
				if (g_strcmp0 (node_name, "name") == 0) {
					BeatBoxSong* _tmp3_ = NULL;
					if (self->priv->similarToAdd != NULL) {
						gee_abstract_collection_add ((GeeAbstractCollection*) self->priv->similar, self->priv->similarToAdd);
					}
					_tmp3_ = beat_box_song_new ("");
					_g_object_unref0 (self->priv->similarToAdd);
					self->priv->similarToAdd = _tmp3_;
					beat_box_song_set_title (self->priv->similarToAdd, node_content);
				} else {
					if (g_strcmp0 (node_name, "url") == 0) {
						beat_box_song_set_lastfm_url (self->priv->similarToAdd, node_content);
					}
				}
			} else {
				if (g_strcmp0 (parent, "similartrackstrackartist") == 0) {
					if (g_strcmp0 (node_name, "name") == 0) {
						beat_box_song_set_artist (self->priv->similarToAdd, node_content);
					}
				}
			}
			_tmp4_ = g_strconcat (parent, node_name, NULL);
			_tmp5_ = _tmp4_;
			last_fm_similar_songs_parse_similar_nodes (self, iter, _tmp5_);
			_g_free0 (_tmp5_);
			_g_free0 (node_content);
			_g_free0 (node_name);
		}
	}
	xmlFreeNode (iter);
}


static void g_cclosure_user_marshal_VOID__OBJECT_OBJECT (GClosure * closure, GValue * return_value, guint n_param_values, const GValue * param_values, gpointer invocation_hint, gpointer marshal_data) {
	typedef void (*GMarshalFunc_VOID__OBJECT_OBJECT) (gpointer data1, gpointer arg_1, gpointer arg_2, gpointer data2);
	register GMarshalFunc_VOID__OBJECT_OBJECT callback;
	register GCClosure * cc;
	register gpointer data1, data2;
	cc = (GCClosure *) closure;
	g_return_if_fail (n_param_values == 3);
	if (G_CCLOSURE_SWAP_DATA (closure)) {
		data1 = closure->data;
		data2 = param_values->data[0].v_pointer;
	} else {
		data1 = param_values->data[0].v_pointer;
		data2 = closure->data;
	}
	callback = (GMarshalFunc_VOID__OBJECT_OBJECT) (marshal_data ? marshal_data : cc->callback);
	callback (data1, g_value_get_object (param_values + 1), g_value_get_object (param_values + 2), data2);
}


static void last_fm_similar_songs_class_init (LastFMSimilarSongsClass * klass) {
	last_fm_similar_songs_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (LastFMSimilarSongsPrivate));
	LAST_FM_SIMILAR_SONGS_CLASS (klass)->queryForSimilar = last_fm_similar_songs_real_queryForSimilar;
	G_OBJECT_CLASS (klass)->finalize = last_fm_similar_songs_finalize;
	g_signal_new ("similar_retrieved", LAST_FM_TYPE_SIMILAR_SONGS, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_user_marshal_VOID__OBJECT_OBJECT, G_TYPE_NONE, 2, GEE_TYPE_LINKED_LIST, GEE_TYPE_LINKED_LIST);
}


static void last_fm_similar_songs_instance_init (LastFMSimilarSongs * self) {
	self->priv = LAST_FM_SIMILAR_SONGS_GET_PRIVATE (self);
}


static void last_fm_similar_songs_finalize (GObject* obj) {
	LastFMSimilarSongs * self;
	self = LAST_FM_SIMILAR_SONGS (obj);
	_g_object_unref0 (self->priv->_lm);
	_g_object_unref0 (self->priv->_base);
	_g_object_unref0 (self->priv->similar);
	_g_object_unref0 (self->priv->similarToAdd);
	G_OBJECT_CLASS (last_fm_similar_songs_parent_class)->finalize (obj);
}


GType last_fm_similar_songs_get_type (void) {
	static volatile gsize last_fm_similar_songs_type_id__volatile = 0;
	if (g_once_init_enter (&last_fm_similar_songs_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (LastFMSimilarSongsClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) last_fm_similar_songs_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (LastFMSimilarSongs), 0, (GInstanceInitFunc) last_fm_similar_songs_instance_init, NULL };
		GType last_fm_similar_songs_type_id;
		last_fm_similar_songs_type_id = g_type_register_static (G_TYPE_OBJECT, "LastFMSimilarSongs", &g_define_type_info, 0);
		g_once_init_leave (&last_fm_similar_songs_type_id__volatile, last_fm_similar_songs_type_id);
	}
	return last_fm_similar_songs_type_id__volatile;
}



