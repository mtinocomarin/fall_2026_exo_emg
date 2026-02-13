// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_2\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 78.54%
// test_accuracy: 76.56%
// prune_trials_per_label: 2
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_31.txt'], 'act2': ['act2\\trial_12.txt', 'act2\\trial_16.txt']}
// generated: 2025-12-12 15:46:15
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.655862, 0.655884,
    -0.271144, 0.271138,
    0.460043, -0.460080,
    0.672875, -0.672854,
    0.845046, -0.845115,
    -0.896072, 0.896180,
    -0.083070, 0.083049,
    -0.027089, 0.027070,
    -0.411817, 0.411819,
    0.376351, -0.376297,
    -0.397107, 0.397094,
    0.180582, -0.180621,
};

float Cg_init[2] = {
    -0.318567, -0.318577
};

float xstd_init[12] = {
    0.003769, 0.001424, 0.101678, 0.172187, 0.001570, 0.000479, 0.028659, 0.079397, 0.001416, 0.000088, 0.017372, 0.064866
};

float xmean_init[12] = {
    0.009836, -0.006226, 0.173667, 0.579750, 0.003158, -0.007736, 0.007278, 0.047250, 0.003213, -0.007808, 0.004167, 0.066417
};

