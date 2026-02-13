// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_10\ResultClipSizeUp800
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp800
// sample_size: 800
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 86.15%
// test_accuracy: 77.50%
// prune_trials_per_label: 10
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_34.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_21.txt', 'act1\\trial_32.txt', 'act1\\trial_35.txt', 'act1\\trial_39.txt', 'act1\\trial_40.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_16.txt', 'act2\\trial_2.txt', 'act2\\trial_11.txt', 'act2\\trial_15.txt', 'act2\\trial_19.txt', 'act2\\trial_25.txt', 'act2\\trial_6.txt', 'act2\\trial_10.txt', 'act2\\trial_12.txt']}
// generated: 2025-12-12 16:07:36
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.811874, 0.811913,
    -0.198332, 0.198330,
    0.590318, -0.590365,
    0.584501, -0.584485,
    1.154276, -1.154273,
    -1.126249, 1.126271,
    -0.168898, 0.168877,
    -0.085676, 0.085667,
    0.728553, -0.728464,
    -0.050119, 0.049884,
    -0.335514, 0.335606,
    0.008848, -0.008780,
};

float Cg_init[2] = {
    -0.521624, -0.521632
};

float xstd_init[12] = {
    0.003349, 0.001295, 0.101460, 0.165258, 0.001252, 0.000382, 0.019729, 0.067541, 0.000521, 0.000075, 0.014772, 0.062077
};

float xmean_init[12] = {
    0.009606, -0.006301, 0.173266, 0.587897, 0.003068, -0.007757, 0.005197, 0.047846, 0.003093, -0.007815, 0.003692, 0.064257
};

