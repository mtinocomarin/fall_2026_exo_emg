// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_6\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 83.33%
// test_accuracy: 80.36%
// prune_trials_per_label: 6
// removed_trials: {'act2': ['act2\\trial_16.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_2.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt'], 'act1': ['act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_34.txt', 'act1\\trial_40.txt', 'act1\\trial_27.txt', 'act1\\trial_31.txt']}
// generated: 2025-12-12 16:05:04
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.969521, 0.969533,
    -0.113244, 0.113249,
    0.720137, -0.720149,
    0.690295, -0.690294,
    1.112213, -1.112085,
    -1.541116, 1.540927,
    0.077292, -0.077256,
    0.103524, -0.103499,
    -0.405160, 0.405163,
    0.571266, -0.571371,
    -0.521405, 0.521452,
    0.162192, -0.162152,
};

float Cg_init[2] = {
    -0.446610, -0.446608
};

float xstd_init[12] = {
    0.003692, 0.001392, 0.099074, 0.166610, 0.001702, 0.000522, 0.030323, 0.085096, 0.001159, 0.000092, 0.018338, 0.067113
};

float xmean_init[12] = {
    0.009799, -0.006260, 0.165588, 0.576286, 0.003299, -0.007696, 0.008254, 0.053619, 0.003229, -0.007805, 0.005016, 0.069048
};

