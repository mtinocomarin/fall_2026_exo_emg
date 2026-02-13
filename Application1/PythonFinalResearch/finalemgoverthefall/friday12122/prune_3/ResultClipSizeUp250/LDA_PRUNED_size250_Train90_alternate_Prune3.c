// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_3\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 82.95%
// test_accuracy: 78.12%
// prune_trials_per_label: 3
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_34.txt', 'act1\\trial_17.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt']}
// generated: 2025-12-12 16:03:17
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.728107, 0.728096,
    -0.052532, 0.052532,
    0.295764, -0.295775,
    0.591102, -0.591083,
    0.793345, -0.793536,
    -1.157798, 1.158087,
    0.303032, -0.303113,
    -0.139502, 0.139488,
    0.680915, -0.680930,
    -0.246506, 0.246595,
    -0.339004, 0.338976,
    0.282771, -0.282808,
};

float Cg_init[2] = {
    -0.422318, -0.422337
};

float xstd_init[12] = {
    0.003739, 0.001347, 0.095215, 0.165284, 0.001655, 0.000508, 0.031413, 0.084475, 0.000553, 0.000089, 0.018158, 0.065444
};

float xmean_init[12] = {
    0.009781, -0.006277, 0.165455, 0.567576, 0.003228, -0.007704, 0.007879, 0.049848, 0.003091, -0.007812, 0.004040, 0.063485
};

