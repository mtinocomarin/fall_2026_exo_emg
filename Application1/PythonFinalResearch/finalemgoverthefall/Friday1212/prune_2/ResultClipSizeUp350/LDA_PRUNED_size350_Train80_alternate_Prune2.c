// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_2\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 79.72%
// test_accuracy: 76.04%
// prune_trials_per_label: 2
// removed_trials: {'act2': ['act2\\trial_2.txt', 'act2\\trial_12.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_31.txt']}
// generated: 2025-12-12 15:46:11
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.775988, 0.776033,
    -0.223927, 0.224019,
    0.445645, -0.445666,
    0.688327, -0.688380,
    0.801586, -0.801721,
    -1.086498, 1.086715,
    0.136717, -0.136794,
    0.028452, -0.028465,
    -0.281656, 0.281846,
    0.491282, -0.491916,
    -0.446656, 0.446879,
    0.153449, -0.153153,
};

float Cg_init[2] = {
    -0.324494, -0.324550
};

float xstd_init[12] = {
    0.003810, 0.001405, 0.101743, 0.171837, 0.001618, 0.000487, 0.031343, 0.084048, 0.000992, 0.000088, 0.018847, 0.064318
};

float xmean_init[12] = {
    0.009884, -0.006225, 0.173704, 0.576555, 0.003188, -0.007729, 0.007704, 0.047889, 0.003178, -0.007809, 0.004370, 0.064111
};

